#include "MyList.h"
template <class elementType>
MyList<elementType>:: MyList() {
	m_length = 0;
	m_size = INIT_SIZE;
	m_list = new elementType[INIT_SIZE];//申请堆数组，表达式返回该片堆内存空间的首地址
}

template <class elementType>
MyList<elementType>::~MyList() {
	//释放堆数组
	delete [] m_list;
}

template <class elementType>
int MyList<elementType>:: GetSize() {
	return m_size;
}

template<class elementType>
int MyList<elementType>::GetLength() {
	return m_length;
}

template<class elementType>
elementType MyList<elementType>::GetElement(int i) {
	if (i <= m_length) {
		return m_list[i];
	}
	else {
		return _NATIVE_NULLPTR_SUPPORTED;
	}
}

template<class elementType>
int MyList<elementType>::InsertAt(int i, elementType e) {
	if (i > m_length || 0 > i){
		return -1;
	}
	else if (GetLength() == GetSize()) {
		elementType *newListPtr = new elementType[GetSize() + INCREAMENT_SIZE];
		m_size += INCREAMENT_SIZE;
		for (int j = 0; j <i ; j++)
		{
			newListPtr[j] = m_list[j];
		}
		for (int j = i + 1; j < m_length + 1; j++) {
			newListPtr[j] = m_list[j - 1];
		}
		newListPtr[i] = e;
		m_length++;
		return i;
	}else {
		int moveIndex = m_length - 1;
		while (moveIndex>=i) {
			m_list[moveIndex + 1] = m_list[moveIndex];
			moveIndex--;
		}
		m_list[i] = e;
		m_length++;
		return i;
	}
}

template<class elementType>
void MyList<elementType>::UpdateAt(int i, elementType e) {
	if (i > 0 && i < m_length) {
		m_list[i] = e;
	}
}

template<class elementType>
void MyList<elementType>::RemoveAt(int i) {
	if (i >= 0 && i < m_length) {
		int nextIndex = i + 1;
		while (nextIndex < m_length)
		{
			m_list[nextIndex - 1] = m_list[nextIndex];
			nextIndex++;
		}
	}
}
