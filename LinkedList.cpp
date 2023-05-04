class Node {
public:
	std::string name;
	int year;
	Node* next;

	Node() {
		name = "x";
		year = 0;
		next = nullptr;
	}

	Node(std::string d) {
		name = d;
		year = 0;
		next = nullptr;
	}

	Node(std::string d, int y) {
		name = d;
		year = y;
		next = nullptr;
	}

};


class LinkedList {
public:
	Node* head;

	LinkedList() {
		head = nullptr;
	}

	void print() {
		print(head);
		cout << endl;
	}

	void push_front(std::string name, int year) {
		Node* child = new Node(name, year);
		child->next = head;
		head = child;
	}

	void push_back(std::string name, int year) {
		push_back(head, name, year);
	}

	Node* search(std::string name) {
		return search(head, name);
	}

	void insert_after(std::string name, int year, std::string parentName) {
		insert_after(head, name, year, parentName);
	}

	void sortedInsert(std::string name, int year) {
		sortedInsert(head, name, year);
	}

private:
	void print(Node* curr) {
		if (curr == nullptr) return;
		std::cout << curr->year << " ";
		print(curr->next);
	}

	void push_back(Node* curr, std::string name, int year) {
		// check case when list is empty
		if (head == nullptr) {
			Node* node = new Node(name, year);
			head = node;
			return;
		}

		// else check case when at end of list
		if (curr->next == nullptr) {
			Node* node = new Node(name, year);
			curr->next = node;
			return;
		}
		push_back(curr->next, name, year);
	}

	Node* search(Node* curr, std::string name) {
		if (curr == nullptr) {
			return nullptr;
		}
		else if (curr->name == name) { 
			return curr; 
		}
		return search(curr->next, name);
	}

	void insert_after(Node* curr, std::string name, int year, std::string parentName) {
		Node* parent = search(parentName);
		if (parent != nullptr) {
			Node* child = new Node(name, year);
			child->next = parent->next;
			parent->next = child;
		}
	}

	void sortedInsert(Node* curr, std::string name, int year) {
		// if list is empty or first ittem's year is greater
		if (head == nullptr || head->year > year) {
			Node* child = new Node(name, year);
			child->next = head;
			head = child;
			return;
		}
		// if endOfList or next year is greater
		else if (curr->next == nullptr || curr->next->year > year) {
			Node* child = new Node(name, year);
			child->next = curr->next;
			curr->next = child;
			return;
		}
		sortedInsert(curr->next, name, year);
	}


};
