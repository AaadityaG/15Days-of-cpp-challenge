#include <iostream> 
using namespace std;
class PrintJobs
{
    int nPages_;            // # of pages in current job
    static int nTrayPages_; /* # of pages in the tray */
    static int nJobs_;      // # of print jobs executing
public:
    PrintJobs(int nP) : nPages_(nP)
    {
        ++nJobs_;
        cout<<"Printing "<<nP<<" pages"<<endl;
        nTrayPages_ = nTrayPages_ - nP;
    }                                                    // Job started
    ~PrintJobs() { --nJobs_; }                           // Job done
    static int getJobs() { return nJobs_; }              // get on nJobs_. Readonly. No set provided
    static int checkPages() { return nTrayPages_; }      // get on nTrayPages_
    static void loadPages(int nP) { nTrayPages_ += nP; } // set on nTrayPages_
};

int PrintJobs::nTrayPages_ = 500; // Definition and initialization -- load paper
int PrintJobs::nJobs_ = 0;        // Definition and initialization -- no job to start with

int main(void)
{
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;
    PrintJobs job1(10);
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;
    {
        PrintJobs job1(30), job2(20); // Different job1 in block scope
        cout << "Jobs = " << PrintJobs::getJobs() << endl;
        cout << "Pages = " << PrintJobs::checkPages() << endl;
        PrintJobs::loadPages(100); // Load 100 more pages
    }
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;

    return 0;
}