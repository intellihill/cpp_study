#include <iostream>
#include <vector>

int main() {
    /**
     * 2차원 vector 선언 및 초기화
     */
    // 3x4 크기의 2차원 벡터 선언(int형, 초기값 0)
    std::vector<std::vector<int>> matrix(3, std::vector<int>(4, 0));

    // 벡터 내용 출력
    for (int i=0; i<matrix.size(); ++i) {
        for (int j=0; j<matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    /**
     * 동적 크기 조절
     * matrix1.push_back(std::vector<int>())를 사용하여 빈 행을 추가한다.
     * 각 행에 push_back으로 요소를 동적으로 추가한다.
     * 범위 기반 for loop를 사용하여 벡터를 순회한다.
     */
    // 빈 2차원 배열 선언
    std::vector<std::vector<int>> matrix1;
    matrix1.push_back(std::vector<int>()); // 첫 번째 행
    matrix1.push_back(std::vector<int>()); // 두 번째 행

    // 첫 번째 행에 요소 추가
    matrix1[0].push_back(1);
    matrix1[0].push_back(2);
    matrix1[0].push_back(3);

    // 두 번째 행에 요소 추가
    matrix1[1].push_back(4);
    matrix1[1].push_back(5);

    // 출력
    for (const auto& row : matrix1) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    /**
     * 요소 접근 및 수정
     * 2차원 벡터의 요소는 matrix2[i][j] 형태로 접근한다.
     * 인덱스가 벗어나지 않도록 주의해야 한다.
     */
    std::vector<std::vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6}
    }

    return 0;
}