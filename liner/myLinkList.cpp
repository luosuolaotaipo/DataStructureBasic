#include "myLinkList.h"
#include <iostream>
using namespace std;
template<class elementType>
MyNode<elementType>::MyNode(elementType e) {
	data = e;
	next = NULL;
}

template<class elementType>
void MyNode<elementType>::printVal() {
	cout << data << endl;
	
}

template <class elementType>
MyLinkList<elementType>::MyLinkList(elementType e) {
	m_linkHead = new MyNode<elementType>(e);
	m_linkHead->next = NULL;
	m_length = 1;
}

template <class elementType>
MyLinkList<elementType>::~MyLinkList() {
	MyNode<elementType>* node = m_linkHead;
	while (node != NULL) {
		MyNode<elementType>* temp = node;
		node = temp->next;
		delete temp;
	}
	delete node;
}

template <class elementType>
int  MyLinkList<elementType>::GetLength() {
	return m_length;
}

template<class elementType>
int MyLinkList<elementType>::InsertAt(int i,elementType e) {
	MyNode<elementType>* newNode = new MyNode<elementType>(e);
	if (i == 0) {
		//修改头节点，新节点next指向头节点
		newNode->next = this->m_linkHead;
		this->m_linkHead = newNode;
		this->m_length++;
		return 0;
	}
	else if (i >= 1 && i <=this->m_length) {
		MyNode<elementType>*  formerNode = GetElement(i - 1);
		newNode->next = formerNode->next;
		formerNode->next = newNode;
		this->m_length++;
		return i;
	}
	else {
		return -1;
	}


}

template<class elementType>
MyNode<elementType>* MyLinkList<elementType>:: GetElement(int index) {
	MyNode <elementType>* temp =  this->m_linkHead;
	if (index > this->m_length) {
		return NULL;
	}
	for (int i = 1; i < index; i++) {
		temp = temp->next;
	}
	return temp;
}

template<class elementType>
void MyLinkList <elementType>::UpdateAt(int i, elementType e) {
	MyNode<elementType> targetNode = GetElement(i);
	if (targetNode != NULL) {
		targetNode.data = e;
	}
}

template<class elementType>
void MyLinkList<elementType>:: RemoveAt(int i) {
	if (i == 0) {
		MyNode<elementType> originHead = this->m_linkHead;
		this->m_linkHead = this->m_linkHead->next;
		delete originHead;
	}
	else if (i > 0 && i < m_length) {
		MyNode<elementType> formerNode, toRemoveNode;
		formerNode= GetElement(i - 1);
		toRemoveNode = formerNode.next;
		formerNode.next = toRemoveNode.next;
		delete toRemoveNode;
	}
}