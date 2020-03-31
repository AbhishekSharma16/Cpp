int main()
{
    std::cout<<"hi"<<std::endl;

	ARRAY a;
	a.Insert(1);
	a.Insert(2);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
	a.Insert(3);
    a.Insert(3);
    for (int i=1;i<=a.ElementCounter;i++)
    {
        std::cout<<*(a.AR+i)<<"\n";//////////////////
    }

    return 0;
}

