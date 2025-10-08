#include <pybind11/pybind11.h>
#include <pybind11/stl.h>  // 如果你要支持 std::vector、std::string 等

namespace py = pybind11;

// 一个简单的 C++ 函数
int add(int a, int b) {
    return a + b;
}

// 一个返回字符串的函数
std::string greet(const std::string &name) {
    return "Hello, " + name + "!";
}

// 一个类的例子
class Pet {
public:
    Pet(const std::string &name, int age)
        : name_(name), age_(age) {}

    void set_name(const std::string &name) { name_ = name; }
    const std::string &get_name() const { return name_; }

    void set_age(int age) { age_ = age; }
    int get_age() const { return age_; }

    std::string info() const {
        return name_ + " is " + std::to_string(age_) + " years old.";
    }

private:
    std::string name_;
    int age_;
};

// PYBIND11_MODULE 宏定义模块名（必须与生成的 .so 名一致）
PYBIND11_MODULE(example, m) {
    m.doc() = "A simple pybind11 example module";  // 模块文档

    // 绑定函数
    m.def("add", &add, "A function that adds two numbers");
    m.def("greet", &greet, "A function that greets someone");

    // 绑定类
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string&, int>())
        .def("set_name", &Pet::set_name)
        .def("get_name", &Pet::get_name)
        .def("set_age", &Pet::set_age)
        .def("get_age", &Pet::get_age)
        .def("info", &Pet::info);
}
