
template<class elementType>class MyNode {
public:
	elementType data;
	MyNode<elementType>* next;
	void printVal();
	MyNode(elementType data);
};

template<class elementType> class MyLinkList
{
public:
	MyLinkList(elementType e);
	~MyLinkList();

	int  GetLength();
	int InsertAt(int index, elementType e);
	MyNode<elementType>* GetElement(int index);
	void UpdateAt(int index, elementType e);
	void RemoveAt(int index);
private:
	MyNode<elementType>* m_linkHead;
	int m_length;
};
