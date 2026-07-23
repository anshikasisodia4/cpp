#include <iostream>
#include <cstring>
using namespace std;

class CWH{
protected:
    string title;
    float rating;
public:
    CWH(string s, float r)
    {
       title = s;
       rating= r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH{
    int videoLength;
public:
    CWHVideo(string s, float r, float vl) : CWH(s, r){
        videoLength=vl;
    }
    void display(){
        cout<<"This is a video with title : "<<title<<endl;
        cout<<"Rating "<<rating<<" Out of 5 stars"<<endl;
        cout<<"Length of video is "<<videoLength<<" minutes"<<endl;
    }
};

class CWHText : public CWH{
    int words;
public:
    CWHText(string s, float r, int wc) : CWH(s, r){
        words=wc;
    }
    void display(){
        cout<<"This is a video with title: "<<title<<endl;
        cout<<"Rating of this video is "<<rating<<endl;
        cout<<"Number of words in this video is "<<words<<endl;
    }
};

int main()
{
    string title;
    float rating ,vlen;
    int words;
    
    // video
    title="Pointers";
    vlen=4.456;
    rating=4.89;
    CWHVideo Pointers(title, rating,vlen);
    // Pointers.display();

    // text
    title ="Pointers text";
    words = 450;
    rating=4.8;
    CWHText PointersText(title,rating,words);
    PointersText.display();

    CWH* video[2];
    video[0]= &Pointers;
    video[1]  = &PointersText;
    video[0]->display();
    video[1]->display();

    return 0;
}

// rules for virtual functions
/*
1. They cannot be static
2. The are accessed by object pointers
3. Virtual Functions can be a friend of another class
4. A function in base class might not be used
5.If a vurtual function defined in a base class, there is no necessity of redefining it in the derived class
*/