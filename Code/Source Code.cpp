#include<bits/stdc++.h> 
#include<cstring> 
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;




string getInputPath(string folder,string fileNumber)
{
		
		string filepath = folder + fileNumber;
		filepath = filepath + ".txt";
		
		return filepath;
}
		
		


void fillStringInput()
{
	ofstream outfile;
   	string input = "sulemantalpur";
	string sample="";
	char filenumber[10][10] = {"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt","10.txt"};
	int	sampleSize;
	
	string folders[3] = {"LCS/", "LD/", "SCS/"};
	
	string filePath;
	
	for(int k=0;k<3;k++)
	{
	
	
			for(int i=0;i<10;i++)
			{	
				filePath=folders[k] + filenumber[i]; 
				outfile.open(filePath.c_str());
				sampleSize = (rand() % 100) + 30;
			
				sample.clear();
				
				for(int j=0;j<sampleSize;j++)
				{
					sample = sample + input[rand() % input.length()];	
				}
				
				outfile<<sample<<endl;
				
				sampleSize = rand() % 70 + 30;
				sample.clear();
				
				for(int j=0;j<sampleSize;j++)
				{
					sample = sample + input[rand() % input.length()];	
				}
				
				
			outfile<<sample;
			outfile.close();
			
		}
	
	}
}

void numberSequence()
{
	
	int sampleSize;
	ofstream outfile;
	string sample = "";
	int number;
	char filenumber[10][10] = {"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt","10.txt"};
	string folders[3] = {"LIS/", "MCM/", "PP/"};
	string filePath;
	
	
	
	for(int k=0;k<3;k++)
	{
	
	
			for(int i=0;i<10;i++)
			{	
			
				filePath=folders[k] + filenumber[i]; 
				outfile.open(filePath.c_str());
				sampleSize = rand() % 70 + 30;
				outfile<<sampleSize<<endl;
				sample.clear();
				for(int i=0;i<sampleSize;i++)
				{
					
					number = (rand() % 100); 
					ostringstream converter;
					converter<<number;
					sample = sample + converter.str();
					sample = sample + " ";
				
				}
	
				
			outfile<<sample;
			outfile.close();
			
		}
	
	}
	
	
			string folder = "CCM/";
			for(int i=0;i<10;i++)
			{	
			
				filePath= folder + filenumber[i]; 
				outfile.open(filePath.c_str());
				sampleSize = rand() % 70 + 30;
				outfile<<"146"<<endl;
				outfile<<sampleSize<<endl;	
				sample.clear();
				for(int i=0;i<sampleSize;i++)
				{
					
					number = (rand() % 100); 
					ostringstream converter;
					converter<<number;
					sample = sample + converter.str();
					sample = sample + " ";
				
				}
	
				
			outfile<<sample;
			outfile.close();
			
		}
	
	
	
}



void knapsackSequence()
{
	
	int sampleSize;
	ofstream outfile;
	string sample = "";
	int number;
	char filenumber[10][10] = {"1.txt","2.txt","3.txt","4.txt","5.txt","6.txt","7.txt","8.txt","9.txt","10.txt"};
	string folders[2] = {"KNP/", "RDC/"};
	string filePath;
	
	
	
	for(int k=0;k<2;k++)
	{
	
	
			for(int i=0;i<10;i++)
			{	
			
				filePath=folders[k] + filenumber[i]; 
				outfile.open(filePath.c_str());
				sampleSize = rand() % 90 + 10;
				outfile<<"146"<<endl;
				outfile<<sampleSize<<endl;
				sample.clear();
				for(int i=0;i<sampleSize;i++)
				{
					
					number = (rand() % 99 + 1); 
					ostringstream converter;
					converter<<number;
					sample = sample + converter.str();
					sample = sample + " ";
				
				}
	
				
				outfile<<sample<<endl;
				
				sample.clear();
				
				for(int i=0;i<sampleSize;i++)
				{
					
					number = (rand() % 100) + 1; 
					ostringstream converter;
					converter<<number;
					sample = sample + converter.str();
					sample = sample + " ";
				
				}
	
				outfile<<sample;
				outfile.close();
			
		}
	
	}
	
	
	
	
}

int rodcutting(int W, int n, 
					int val[], int wt[])
{
	int dp[W+1];
	memset(dp, 0, sizeof dp);

	for (int i=0; i<=W; i++)
	for (int j=0; j<n; j++)
		if (wt[j] <= i)
			dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);

	return dp[W];
}


int dictionaryContains(string word, string * dictionary, int size) 
{ 
	
	
	for (int i = 0; i < size; i++) 
		if (dictionary[i].compare(word) == 0) 
		return true; 
	return false; 
} 
bool wordBreak(string str, string * dict, int dsize) 
{ 
	int size = str.size(); 
	if (size == 0) return true; 
	bool wb[size+1]; 
	memset(wb, 0, sizeof(wb)); 

	for (int i=1; i<=size; i++) 
	{ 
		if (wb[i] == false && dictionaryContains( str.substr(0, i), dict, dsize )) 
			wb[i] = true; 

		if (wb[i] == true) 
		{ 
			if (i == size) 
				return true; 

			for (int j = i+1; j <= size; j++) 
			{ 
				if (wb[j] == false && dictionaryContains( str.substr(i, j-i), dict, dsize )) 
					wb[j] = true; 
				if (j == size && wb[j] == true) 
					return true; 
			} 
		} 
	} 

	return false; 
} 




int count(int S[], int n, int N)
{
    int T[N + 1];
    T[0] = 0;    
    for (int i = 1; i <= N; i++)
    {
        T[i] = INT_MAX;
        int res = INT_MAX;
 

        for (int c = 0; c < n; c++)
        {
            if (i - S[c] >= 0)
                res = T[i - S[c]];
            if (res != INT_MAX)
                T[i] = min(T[i], res + 1);
        }
    }
 
    return T[N];
}


int cutRod(int price[], int n) 
{ 
int val[n+1]; 
val[0] = 0; 
int i, j; 

for (i = 1; i<=n; i++) 
{ 
	int max_val = INT_MIN; 
	for (j = 0; j < i; j++) 
		max_val = max(max_val, price[j] + val[i-j-1]); 
	val[i] = max_val; 
} 

return val[n]; 
} 




bool findPartiion(int arr[], int n)
{
	int sum = 0;
	int i, j;

	for (i = 0; i < n; i++)
		sum += arr[i];

	if (sum % 2 != 0)
		return false;

	bool part[sum / 2 + 1][n + 1];

	for (i = 0; i <= n; i++)
		part[0][i] = true;

	for (i = 1; i <= sum / 2; i++)
		part[i][0] = false;

	for (i = 1; i <= sum / 2; i++) {
		for (j = 1; j <= n; j++) {
			part[i][j] = part[i][j - 1];
			if (i >= arr[j - 1])
				part[i][j] = part[i][j]
							|| part[i - arr[j - 1]][j - 1];
		}
	}
	return part[sum / 2][n];
}





int max(int a, int b) { return (a > b) ? a : b; } 
int knapSack(int W, int wt[], int val[], int n) 
{ 
    
    
     
	    ofstream File("KnapsackOutput.txt");
	int i, w; 
	int K[n + 1][W + 1]; 

	for (i = 0; i <= n; i++) { 
		for (w = 0; w <= W; w++) { 
			if (i == 0 || w == 0) 
				K[i][w] = 0; 
			else if (wt[i - 1] <= w) 
				K[i][w] = max(val[i - 1] + 
					K[i - 1][w - wt[i - 1]], K[i - 1][w]); 
			else
				K[i][w] = K[i - 1][w]; 
		} 
	} 
	int res = K[n][W];	 
	cout<<"Total Profit"<<endl;
	cout<<res<<endl;
	File<<res<<endl;
	
	w = W; 
	cout<<"Included Items"<<endl;
	for (i = n; i > 0 && res > 0; i--) { 
		
		if (res == K[i - 1][w]) 
			continue;		 
		else { 

			File<<wt[i-1]<<" ";
			cout<<wt[i-1]<<" ";
			res = res - val[i - 1]; 
			w = w - wt[i - 1]; 
		} 
	} 
} 


string lcs( string X, string Y) 
{ 
	int m=X.length();
	int n=Y.length();
	
   int L[m+1][n+1]; 
  
   for (int i=0; i<=m; i++) 
   { 
     for (int j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
       else if (X[i-1] == Y[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   } 
  
   int index = L[m][n]; 
  
   char lcs[index+1]; 
   lcs[index] = '\0'; 
  
   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 
      if (X[i-1] == Y[j-1]) 
      { 
          lcs[index-1] = X[i-1];  
          i--; j--; index--;      
      } 
  
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 
  
	string lcss(lcs);
	
	return lcss;	
} 
  
  

string printShortestSuperSeq(string X, string Y) 
{ 
	int m = X.length(); 
	int n = Y.length(); 

	int dp[m + 1][n + 1]; 

	for (int i = 0; i <= m; i++) 
	{ 
		for (int j = 0; j <= n; j++) 
		{ 
			if(i == 0) 
				dp[i][j] = j; 
			else if(j == 0) 
				dp[i][j] = i; 
			else if(X[i - 1] == Y[j - 1]) 
				dp[i][j] = 1 + dp[i - 1][j - 1]; 
			else
				dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]); 
		} 
	} 

	int index = dp[m][n]; 

	string str; 

	int i = m, j = n; 
	while (i > 0 && j > 0) 
	{ 
		if (X[i - 1] == Y[j - 1]) 
		{ 
			str.push_back(X[i - 1]); 

			i--, j--, index--; 
		} 

		else if (dp[i - 1][j] > dp[i][j - 1]) 
		{ 
			str.push_back(Y[j - 1]); 

			j--, index--; 
		} 
		else
		{ 
			str.push_back(X[i - 1]); 

			i--, index--; 
		} 
	} 

	while (i > 0) 
	{ 
		str.push_back(X[i - 1]); 
		i--, index--; 
	} 

	while (j > 0) 
	{ 
		str.push_back(Y[j - 1]); 
		j--, index--; 
	} 

	reverse(str.begin(), str.end()); 
	return str; 
} 

  int min(int x, int y, int z) { return min(min(x, y), z); }
 
int editDistDP(string str1, string str2, int m, int n)
{
    int dp[m + 1][n + 1];
 
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j; 
 
            else if (j == 0)
                dp[i][j] = i; 
 
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
 
            else
                dp[i][j]
                    = 1
                      + min(dp[i][j - 1], 
                            dp[i - 1][j], 
                            dp[i - 1][j - 1]); 
        }
    }
 
    return dp[m][n];
}

  
int lis(int arr[], int n) 
{ 
    int *lis, i, j, max = 0; 
    lis = (int*)malloc(sizeof(int) * n); 
  
    for (i = 0; i < n; i++) 
        lis[i] = 1; 
  
    for (i = 1; i < n; i++) 
        for (j = 0; j < i; j++) 
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) 
                lis[i] = lis[j] + 1; 
  
    for (i = 0; i < n; i++) 
        if (max < lis[i]) 
            max = lis[i]; 
  
    free(lis); 
  
    return max; 
} 
void printLIS(vector<int>& arr,ofstream &File)
{

	int size = arr.size();
	
	for(int i=0;i<size;i++)
	{
			
		 File << arr[i] << " ";
		 cout<< arr[i]<<" ";
	}

    File << endl;
    cout<<endl;
}
 
void constructPrintLIS(int arr[], int n,ofstream &File)
{
    vector<vector<int> > L(n);
 
    L[0].push_back(arr[0]);
 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] > arr[j]) &&
                    (L[i].size() < L[j].size() + 1))
                L[i] = L[j];
        }
 
        L[i].push_back(arr[i]);
    }
 
    vector<int> max = L[0];
 
   for(int i=0;i<L.size();i++)
        if (L[i].size() > max.size())
            max = L[i];
 
    printLIS(max,File);
}

void printParenthesis(int i, int j, int n, long long int* bracket,
                      char& name,ofstream &File)
{
    if (i == j) {
        File << name++;
        cout<< name++;
        return;
    }
 
    File << "(";
    cout<< "(";
    printParenthesis(i, *((bracket + i * n) + j), n,
                     bracket, name,File);
 
    printParenthesis(*((bracket + i * n) + j) + 1, j, n,
                     bracket, name,File);
    File << ")";
    cout<<")";
}
 
void matrixChainOrder(long long int p[], int n)
{
	ofstream File("MCMOutput.txt");
	
    long long int m[n][n];
 
    long long int bracket[n][n];
 
    for (int i = 1; i < n; i++)
        m[i][i] = 0;
 
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++) 
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) 
            {
                long long int q = m[i][k] + m[k + 1][j]
                        + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) 
                {
                    m[i][j] = q;
 
                    bracket[i][j] = k;
                }
            }
        }
    }
 
    char name = 'A';
    cout << "Optimal Parenthesization is : ";
    File << "Optimal Parenthesization is : ";
    printParenthesis(1, n - 1, n, (long long int*)bracket, name,File);
    cout<< "Optimal Cost is : " << m[1][n - 1]<<endl;
    File << "Optimal Cost is : " << m[1][n - 1]<<endl;
}

  
  
int main() 
{ 

   int choice;
   cout<<"\tChoose a program"<<endl;
   while(1){
 cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 1 ||		Longest CommonSequence Problem		"<<endl;
   	cout<<"____________________________________________________________"<<endl;
	cout<<"|| 2 ||		Shortest Supersequence Problem					"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 3 ||		Edit Distance Proble						"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 4 ||		Longest Increasing Sequence Problem			"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 5 ||		Matrix Chain Multiplication Problem					"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 6 ||		Partition Problem								"<<endl;
   	cout<<"____________________________________________________________"<<endl;
	cout<<"|| 7 ||		RodCutting Problem								"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"|| 8 ||		CoinChange Problem								"<<endl;
   	cout<<"____________________________________________________________"<<endl;
	cout<<"|| 9 ||		WordBreak Problem								"<<endl;
   	cout<<"____________________________________________________________"<<endl;
   	cout<<"||10 ||		0/1 Knapsack Problem							"<<endl;
   	cout<<"____________________________________________________________"<<endl;
	cout<<"|| 0 ||		Exit								  "<<endl;
   	cout<<"____________________________________________________________"<<endl;
   
   cin>>choice;
   if(choice==0){
   	break;
   }
  
//   	fillStringInput();
//	numberSequence();
//	knapsackSequence();
	ifstream infile;
			
			
   switch(choice){
   	case 1:
   		{
   		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("LCS/",filenumber);	
		infile.open(filepath.c_str());	
	
   		int count=1;
   		string X ; 
        string Y,myText; 
   	    while (getline (infile, myText)) {
   	    if(count==1){
   	     X=myText;	
   	     count++;
   	    }
		   
		else{
			Y=myText;
		}   
		}
		ofstream File("LcsOutput.txt");
		File<<lcs(X, Y);
		cout<<"Longest Common SubSequence"<<endl;
      	cout<<lcs(X,Y)<<endl;
	   infile.close();

		}
		break;
	case 2:
		{
			cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("SCS/",filenumber);	
		infile.open(filepath.c_str());	
		
			int count=1;
   		string M ; 
        string N,Text; 
   	    while (getline (infile, Text)) {
   	    if(count==1){
   	     M=Text;	
   	     count++;
   	    }
		   
		else{
			N=Text;
		}   
		}
		ofstream File("SSSOutput.txt");
		cout<<"M=  "<<M<<endl<<"N= "<<N<<endl;
		File<<printShortestSuperSeq(M, N);
		cout<<"Shortest Super Sequence"<<endl;
		cout<<printShortestSuperSeq(M, N)<<endl;
		infile.close();
	}
		break;
	case 3:
	   	{
	   		
		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("LD/",filenumber);	
		infile.open(filepath.c_str());	
		
			int count=1;
   		string M ; 
        string N,Text; 
   	    while (getline (infile, Text)) {
   	    if(count==1){
   	     M=Text;	
   	     count++;
   	    }
		   
		else{
			N=Text;
		}   
		}
		cout<<"M= "<<M<<endl;	
		cout<<"N= "<<N<<endl;
		ofstream File("editDistOutput.txt");
		File<<editDistDP(M, N,M.length(),N.length());
		cout<<"Edit Distance"<<endl;
		cout<<editDistDP(M, N,M.length(),N.length())<<endl;
		infile.close();
	}
		break;
	case 4:
	{
		
		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("LIS/",filenumber);	
		infile.open(filepath.c_str());	
		int size;
		int arr[size];
		infile>>size;
		for(int i=0;i<size;i++)
		{
			infile>>arr[i];
		}
	
			ofstream File("LisOutput.txt");
	
		File<<lis(arr,size);
		File<<endl;
		cout<<"Longest Increasing Sequence"<<endl;
		cout<<lis(arr,size)<<endl;
		constructPrintLIS(arr,size,File);
		infile.close();
	}
	break;	
	case 5:
	{
		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("MCM/",filenumber);	
		infile.open(filepath.c_str());	
		
		int size;
		infile>>size;
		long long int arr[size];
		
		for(int i=0;i<size;i++)
		{
			infile>>arr[i];
		}
	
		
	
	    cout<<"Matrix Chain Multiplication "<<endl;
		matrixChainOrder(arr,size);
		infile.close();
	}
	break;   	
   
   case 6:
   	
	   {
   		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("PP/",filenumber);	
		infile.open(filepath.c_str());	
		   
		int arr[100],number,c=0;
		while(infile>>number){
			arr[c]=number;
			c++;
		}
		
	    ofstream File("PartitionOutput.txt");
	    cout<<"Partitions"<<endl;
		if(findPartiion(arr,c)==true){
			File<<"Possible"<<endl;
			cout<<"Possible"<<endl;
		}
		else{
			File<<"Not Possible"<<endl;
			cout<<"Not	 Possible"<<endl;
		}
		infile.close();
	   }
	   break;
	case 7:
		{
		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("RDC/",filenumber);	
		infile.open(filepath.c_str());	
		int max_len,size;
		infile>>max_len;
		infile>>size;
		int arr[size];
		int price[size];
		for(int i=0;i<size;i++)
		{
			infile>>arr[i];
		}
		
		for(int i=0;i<size;i++)
		{
			infile>>price[i];
		}
		
		
		
		ofstream File("CutRodOutput.txt");
	    
		cout<<"Rod Cutting "<<endl;
		int num= rodcutting(max_len,size,price,arr);
		File<<num;
		cout<<num<<endl;
		infile.close();
		}
	break;
	   
	 case 8:
	 {
	 	cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("CCM/",filenumber);	
		infile.open(filepath.c_str());
	 	int arr[100],number,c=0,n;
		infile>>n;
		int size;
		infile>>size;
		for(int i=0;i<size;i++)
		{
			infile>>arr[i];
		}
		
		
	    ofstream File("CoinChangeOutput.txt");
	    cout<<"Coin Change "<<endl;
		File<<count(arr,size,n);
		cout<<count(arr,size,n)<<endl;
	 	infile.close();
	   }
	   break;
	   case 9:
	   {
	   	cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("WRD/",filenumber);	
		infile.open(filepath.c_str());
	 	
	 	string word;
		int number;
	 	infile>>word;
	 	
	 	infile>>number;
	 	string dict[number];
	 	for(int i=0;i<number;i++)
	 	{
	 		infile>>dict[i];
	}
		
	    ofstream File("WordBreakOutput.txt");
	    
	    wordBreak(word,dict,number) ? cout<<"True"<<endl :cout<<"Fasle"<<endl;
		wordBreak(word,dict,number) ? File<<"True"<<endl :File<<"Fasle"<<endl;
		
		}
		break;
		case 10:
		{
		cout<<"Please select the input file number from 1-10:";
		string filenumber;
		cin>>filenumber;
		string filepath = getInputPath("KNP/",filenumber);	
		infile.open(filepath.c_str());
		int arr[100],arr1[100],number,c=0,n,W,d=0;
		infile>>W;
	     infile>>n;
		while(infile>>number){
			if(c<n){
			arr[c]=number;
			c++;
		}
		else{
			arr1[d]=number;
			d++;
		}
		}
		
		knapSack(W,arr1,arr,n);
		
		infile.close();
		  }
		  break;  
		  
		  default:
		  	break;
}
}
  return 0; 
} 
