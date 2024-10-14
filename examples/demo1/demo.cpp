#include <iostream>

using namespace std;

enum WeekDay {
	Mon, Tues, Wed, Thur, Fri, Sat, Sun
};

// 将枚举weekDay转成字符串
const char* week2String(WeekDay week){
	const char* weekNames[] = {"Mon", "Tues", "Wed", "Thur", "Fri", "Sat", "Sun"};
	if (week >= Mon && week <= Sun){
		return weekNames[week];
	}

	return "Unkonwn weekday";
}

// 申明函数 => 因为C++是从上到下编译的，main中调用add方法，add就必须在main之前申明，否则会报错：undefined，实现可以在前面，后面，没有影响
int add(int a, int b);

// 申明一个Girl的类，内部有属性和成员函数
class Girl {
public:
	// 属性字段
	int age;
	std::string name;

	// 构造函数
	Girl(int i, const std::string& s){
		age = i;
		name = s;
	}

	// 成员函数
	void printValues() {
		std::cout << "Age: " << age << std::endl;
		std::cout << "Name: " << name << std::endl;
	}
};

int main() {
	//std::cout << "Hello World!" << std::endl;
	cout << "-------------------------\n"
	<< "Hello World!\n"
	<< "welcome to C++ \n";


	enum Color{
		red, green, blue
	} color;

	color = blue;
	printf("color == %d\n", color);

	enum WeekDay w = Thur;
	printf("Today is %s\n", week2String(w));


	// 类型转换
	// 静态转换
	int i = 10;
	float f = static_cast<float>(i); // 静态将int类型转换成float类型
	printf("int i = %d, float f = %.2f\n", i, f);

	i = 65;
	char c = (char)i;
	printf("int i = %d, c = %c\n", i, c);


	int aa = 100;  // 注意，C++中必须要初始化变量的值，否则输出的值不确定，可能是内存地址中的一个垃圾值 ==> 所以最好每次都显示地初始化变量的值
	printf("aa = %d\n",aa);

	// 函数调用
	int num1 = 2;
	int num2 = 3;
	int result = add(num1, num2);
	printf("num1 + num2 = %d\n", result);

	// 初始化Girl的类
	Girl obj(18, "Swift");
	// 调用类成员方法函数 =>
	obj.printValues();

	return 0;
}


// 上面申明过，下面实现
int add(int a, int b){
	return a + b;
}



