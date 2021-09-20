//uppercase to lowercase conversion
	char lower='A'| (1<<5);
	cout<<lower<<endl;

	//lowercase to uppercase conversion
	char upper='c'&(~(1<<5));
	cout<<upper<<endl;


	//trick to upper-lower case conversion 
	cout<<char('S'|' ')<<endl;
	cout<<char('m'&'_')<<endl;
