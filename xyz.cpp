#include <iostream>
#include <cstring>
using namespace std;

class mine
{
protected:
    string title;
    float rate;

public:
    mine(string s, float r)
    {
        title = s;
        rate = r;
    }
    virtual void display() {} // Pure virtual function
};

class mineVideo : public mine
{
    float videoLength;

public:
    mineVideo(string s, float r, float vl) : mine(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings of this video tutorial is " << rate << " Out of 5 stars" << endl;
        cout << "Length of this video is " << videoLength << " Minutes" << endl;
    }
};

class mineText : public mine
{
    int words;

public:
    mineText(string s, float r, int wd) : mine(s, r)
    {
        words = wd;
    }
    void display()
    {
        cout << "This is an amazing Text tutorials with title " << title << endl;
        cout << "Ratings of this text tutorial is " << rate << " Out of 5 stars" << endl;
        cout << "Length of this text is " << words << " Words" << endl;
    }
};

int main()
{
    string title;
    float rate, vlen;
    int words;

    // for video tutorials
    title = "Cpp Tutorials";
    vlen = 100.23;
    rate = 4.87;
    mineVideo videoC(title, rate, vlen);
    videoC.display();

    // for text tutorials
    title = "Cpp text Tutorials";
    words = 1223;
    rate = 4.97;
    mineText videoCt(title, rate, words);
    videoCt.display();

    mine *tuts[2];
    tuts[0] = &videoC;
    tuts[1] = &videoCt;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
