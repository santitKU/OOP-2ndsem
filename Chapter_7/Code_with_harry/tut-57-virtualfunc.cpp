#include<iostream>
#include<cstring>

using namespace std;

class CWH{
    protected:
         string title;
        float rating;
    public:
        CWH(string s, float r){
            title=s;
            rating = r;
        }
        virtual void display(){
            cout<<"Bogus code"<<endl;
        }
};

class CWHVideo: public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r,float  vl): CWH(s, r){
            videoLength = vl;

        }
        void display(){
            cout<<"This is and amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars."<<endl;
            cout<<"Length of this video is: "<<videoLength<<endl;
        }
};


class CWHText: public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;

        }
        void display(){
            cout<<"This is and amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars."<<endl;
            cout<<"LNumber of word is is: "<<words<<endl;
        }
};



int main(){
    string title ;
    float rating, vlen;
    int words=433;
    //for video
    title = "Django tutorial";
    vlen = 2.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    //for text
    title = "Django tutorial text";
    vlen = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}