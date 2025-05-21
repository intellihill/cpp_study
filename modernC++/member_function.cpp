
class complex {
public:
    double get_r() {
        return r;
    }
    void set_r(double newr) {
        r= newr;
    }
    double get_i() {
        return i;
    }
    void set_i(double newi) {
        i= newi;
    }

private:
    double r, i;
};


int main() {
    complex c1, c2;

    c1.set_r(3.0);  // 지저분한 초기화
    c1.set_i(2.0);

    // c1을 c2에 복사
    c2.set_r(c1.get_r());
    c2.set_i(c1.get_i());

    return 0;
}