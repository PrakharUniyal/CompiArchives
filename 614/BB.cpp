#include <bits/stdc++.h>
using namespace std;
#define test(t) int t;cin>>t; while(t--)
#define num(n) long long n; cin>>n
#define str(s) string s; cin>>s
#define arr(a,n) vector<long long> a(n); for(long long i=0;i<n;i++) {cin>>a[i];}
#define aout(a,i) for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl
#define loop(i,m,n) for(long long i=m;i<n;i++)
#define de(n) cout<<n<<endl
#define ok ios_base::sync_with_stdio(0); cin.tie(NULL)

#define ALPHABET_SIZE (26) 

#define CHAR_TO_INDEX(c) ((int)c - (int)'a') 
  

struct TrieNode 
{ 
    struct TrieNode *children[ALPHABET_SIZE]; 
    bool isLeaf; 
}; 
  
 
struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode = new TrieNode; 
  
    if (pNode) 
    { 
        int i; 
  
        pNode->isLeaf = false; 
  
        for (i = 0; i < ALPHABET_SIZE; i++) 
            pNode->children[i] = NULL; 
    } 
  
    return pNode; 
} 
  
void insert(struct TrieNode *root, string key) 
{ 
    int length = key.length(); 
    int index; 
  
    struct TrieNode *pCrawl = root; 
  
    for (int level = 0; level < length; level++) 
    { 
        index = CHAR_TO_INDEX(key[level]); 
        if (!pCrawl->children[index]) 
            pCrawl->children[index] = getNode(); 
  
        pCrawl = pCrawl->children[index]; 
    } 
    pCrawl->isLeaf = true; 
} 

int countChildren(struct TrieNode *node, int *index) 
{ 
    int count = 0; 
    for (int i=0; i<ALPHABET_SIZE; i++) 
    { 
        if (node->children[i] != NULL) 
        { 
            count++; 
            *index = i; 
        } 
    } 
    return (count); 
} 

string walkTrie(struct TrieNode *root) 
{ 
    struct TrieNode *pCrawl = root; 
    int index; 
    string prefix; 
  
    while (countChildren(pCrawl, &index) == 1 && 
            pCrawl->isLeaf == false) 
    { 
        pCrawl = pCrawl->children[index]; 
        prefix.push_back('a'+index); 
    } 
    return (prefix); 
} 
  

void constructTrie(string arr[], int n, struct TrieNode *root) 
{ 
    for (int i = 0; i < n; i++) 
        insert (root, arr[i]); 
    return; 
} 
  

string commonPrefix(string arr[], int n) 
{ 
    struct TrieNode *root = getNode(); 
    constructTrie(arr, n, root); 
  
    // Perform a walk on the trie 
    return walkTrie(root); 
} 

int main()
#define int long long
{
    ok;
    num(n);
    vector<string> st(n);

    loop(i,0,n){cin>>st[i];}

    num(q);

    loop(i,0,q)
    {
        num(r);
        num(s);
        num(t);

        string x[] = {st[r-1],st[s-1],st[t-1]};
        string ans = commonPrefix(x,3);

        cout<<ans.length()<<endl;
    }

    return 0;
}
