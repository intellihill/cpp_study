#include <iostream>
#include <type_traits>

// nlohmann/json의 json_default_base 모방
class JsonDefaultBase {
public:
    void print() const { std::cout << "Default JSON\n"; }
};

// 커스텀 JSON 타입
class MyJson {
public:
    void print() const { std::cout << "Custom JSON\n"; }
};

//json_base_class 정의
namespace nlohmann {
    namespace detail {
        template<class T>
        using json_base_class = typename std::conditional<
            std::is_same<T, void>::value,
            JsonDefaultBase,
            T
        >::type;
    }
}

int main() {
    // T= void
    nlohmann::detail::json_base_class<void> defaultJson;
    defaultJson.print();

    // T= MyJson
    nlohmann::detail::json_base_class<MyJson> customJson;
    customJson.print();

    return 0;
}