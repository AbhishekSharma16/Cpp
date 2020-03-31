#include<iostream>
class ARRAY
{
	public:

	int OverflowCounter ;
    int ElementCounter ;
    int* AR;

    ARRAY() : OverflowCounter(1), ElementCounter(0)
    {
        std ::cout<<"enter constructor\n";
        AR = create(1);
        std ::cout<<"exit const\n";

    }


    int* create(int OverflowCounter)
    {

        int* ar= new int[OverflowCounter*10];
        return ar;

    }


    void overflow()
    {
        int* ar =create(++OverflowCounter);

        for (int i=0 ; i<=ElementCounter ; i++)
            *(ar+i)=*(AR+i);


        *AR=*ar;
       // delete ar;

    }


    void Insert()
    {
        if ( ElementCounter <= OverflowCounter * 10 )
        {
            std::cout<<"enter element";
            int value;
            std::cin>>value;
            //std::cout<<ElementCounter<<"\n";
            *(AR+ElementCounter) = value;
            ElementCounter++;
            std::cout<<*(AR+ElementCounter)<<"\n"<<"inserted\n";

        }
       /* else
        {
           overflow();
           *(AR+ElementCounter) = value;
           ElementCounter++;
           std::cout<<*(AR+ElementCounter)<<"\n"<<"inserted overflow";
        }*/


    }


    ~ARRAY()
    {
        delete AR ;
    }
};

int main()
{

    std::cout<<"hi"<<std::endl;

	ARRAY a;
	a.Insert();

    return 0;
}
