#include <iostream>

template<class T>
class My_ptr {
private:
	T* m_ptr;
public:
	My_ptr(T* ptr) {
		this->m_ptr = ptr;

	}

	My_ptr(const My_ptr& a) = delete;

	My_ptr& operator=(const My_ptr& a) = delete;

	~My_ptr() {
		delete m_ptr;
	}

	T& operator*() {
		return *m_ptr;
	}


	//фактически функция реализует оператор присвоения, в чем я и ошибся(возможно не правильно понял задание)
	T* release(My_ptr& a) {
		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return m_ptr;
	}

	T* release() {
		m_ptr = nullptr;
		return m_ptr;
	}
};


int main()
{
	My_ptr<int> num(new int(3));
	My_ptr<int> num1(new int(4));

	num1.release(num);
	num1.release();

	return 0;
}

