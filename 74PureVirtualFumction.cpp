#include <iostream>
#include <cstring>
using namespace std;

// abstract base  class : which has atleast one pure virtual function
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
    virtual void display()= 0; // do nothing function--> pure virtual function
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