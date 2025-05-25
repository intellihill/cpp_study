#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

// 2D 백터 구조체
struct Vec2 {
    float x, y;
    Vec2(float x_, float y_) : x(x_), y(y_) {}
};

// 픽셀 색상 구조체
struct Color {
    int r, g, b;
    Color(int r_, int g_, int b_) : r(r_), g(g_), b(b_) {}
};

int main() {
    int width= 256;
    int height= 256;
    std::vector<std::vector<Color>> canvas(height, std::vector<Color>
    (width, Color(0, 0, 0)));
    
    // 원 정의 (중심, 반지름)
    Vec2 center(128, 128);
    float radius= 50.0f;
    
    // 캔버스에 원 그리기
    for (int y= 0; y < height; ++y) {
        for (int x= 0; x < width; ++x) {
            float dx= x - center.x;
            float dy= y - center.y;
            float distance= std::sqrt(dx * dx + dy * dy);
            
            // 원 내부면 빨간색, 외부면 검은색
            if (distance <= radius) {
                canvas[y][x]= Color(255, 0, 0);
            }
        }
    }
    
    // PPM 파일로 저장
    std::ofstream file("circle.ppm");
    file << "P3\n" << width << " " << height << "\n255\n";
    for (int y= 0; y < height; ++y) {
        for (int x= 0; x < width; ++x) {
            file << canvas[y][x].r << " " << canvas[y][x].g << " " << canvas[y][x].b << "\n";
        }
    }
    file.close();
    std::cout << "원 이미지가 생성되었습니다. circle.ppm\n";
    
    return 0;
}
