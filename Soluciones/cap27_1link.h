struct node
{
	int data;
	node *next;
};

namespace vecInt{
class vectorOfInt
{
		private:
		node *head, *tail;

		public:
		vectorOfInt(int num, int size);
		void createnode(int value);
		void display();
    void display_i(int index);
		void insert_start(int value);
		void insert_position(int pos, int value);
		void delete_first();
		void delete_last();
		void delete_position(int pos);

};
}
