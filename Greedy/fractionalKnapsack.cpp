static bool myComp(Item a, Item b){
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2;
    }
    
    double fractionalKnapsack(int w, Item items[], int n)
    {
     sort(items,items+n,myComp);
    int currWeight=0;
    double finalvalue=0.0;
    for(int i=0;i<n;i++){
        
        //complete portion
        if(currWeight+items[i].weight <= w){
            currWeight+=items[i].weight;
            finalvalue+=items[i].value;
        }
        
        else{   //fractional knapsack 
            int remain=w-currWeight;
            finalvalue+=((double)remain/(double)items[i].weight)* (double)items[i].value;
            break;
        }
    }
    return finalvalue;
    }
