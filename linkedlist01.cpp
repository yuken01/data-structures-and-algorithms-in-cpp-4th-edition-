//A LINKED STRUCTURE is a collection of nodes storing data 
	//and links to other nodes.
//A data structure composed of nodes, 
	//each node holding some information and 
	//a pointer to another node in the list.
//each node in the single linked list is 
	//an instance of the following class definition:

class IntSLLNode{
	public:
		//two constructors:
		//1st:null 
		IntSLLNode(){
			next=0;//initializes the next pointer to null
			//and leaves the value of info unspecified
		}
		//2nd:normal
		IntSLLNode(int i , IntSLLNode *in =0){//cover the case
		//when only one numerical argument is supplied by the user
			info=i;	next= in;
		}
		
		//3rd: data and pointer
		int info;
		IntSLLNode *next;//IntSLLNode is defined in terms of itself
		//Objects that include such a data member are called  
			// self-referential objects.
};

//1st:excute the declaration and assignment
IntSLLNode *p = new IntSLLNode(10);//p : a pointer to this node
p->next = new IntSLLNode(8);//(*p).next
p->next->next = new IntSLLNode(50);
// the list is accessible only through the variable p

