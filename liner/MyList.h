
template<class elementType>class MyList {

public:
	MyList();
	~MyList();

	int GetSize();
	int  GetLength();
	int InsertAt(int index, elementType e);
	elementType GetElement(int index);
	void UpdateAt(int index, elementType e);
	void RemoveAt(int index);
public:
	enum config
	{
		INIT_SIZE = 20,
		INCREAMENT_SIZE = 10
	};
private:
	elementType *m_list;
	int m_length;//³¤¶È
	int m_size;//ÈÝÁ¿
};