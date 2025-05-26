#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

// 간단한 2D 백터 구조체
struct Vector2 {
    float x, y;
    Vector2(float x_, float y_) : x(x_), y(y_) {}
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }
    float magnitude() const {
        return std::sqrt(x * x + y * y);
    }
};

// PPM 이미지 생성 클래스
class Canvas {
    int width, height;
    std::vector<std::vector<int>> pixels; // R, G, B 저장
public:
    Canvas(int w, int h) : width(w), height(h) {
        pixels.resize(h, std::vector<int>(w * 3, 255)); // 흰색 배경
    }

    void setPixel(int x, int y, int r, int g, int b) {
        if (x >= 0 && x < width && y >= 0 && y < height) {
            pixels[y][x * 3]= r;
            pixels[y][x * 3 + 1]= g;
            pixels[y][x * 3 + 2]= b;
        }
    }

    void savePPM(const std::string& filename) {
        std::ofstream file(filename);
        file << "P3\n" << width << " " << height << "\n255\n";
        for (int y= 0; y < height; ++y) {
            for (int x= 0; x < width  * 3; ++x) {
                file << pixels[y][x] << " ";
            }
            file << "\n";
        }
        file.close();
    }
};

// 브레젠험 알고리즘으로 직선 그리기
void drawLine(Canvas& canvas, Vector2 p0, Vector2 p1, int r, int g, int b) {
    int x0= static_cast<int>(p0.x), y0= static_cast<int>(p0.y);
    int x1= static_cast<int>(p1.x), y1= static_cast<int>(p1.y);
    int dx= std::abs(x1 - x0), dy= std::abs(y1 - y0);
    int sx= x0 < x1 ? 1 : -1, sy= y0 < y1 ? 1 : -1;
    int err = dx - dy;

    while(true) {
        canvas.setPixel(x0, y0, r, g, b);
        if (x0 == x1 && y0 == y1) break;
        int e2= 2 * err;
        if (e2 > -dy) {
            err -= dy; 
            x0 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
}

int main() {
    Canvas canvas(100, 100); // 100x100 캔버스
    Vector2 p0(10, 10), p1(90, 90); // 대각선 직선
    drawLine(canvas, p0, p1, 255, 0, 0); // 빨간색 직선
    canvas.savePPM("line.ppm");
    std::cout << "직선이 그려진 line.ppm 파일이 생성되었습니다.\n";
    return 0;
}