#ifndef RangeTrackMedian5Filter_h
#define RangeTrackMedian5Filter_h

#include "RangeTrackFilter.h"

#include <vector>

using namespace std;

typedef long pixelvalue ;

#define PIX_SORT(a,b) { if ((a)>(b)) PIX_SWAP((a),(b)); }
#define PIX_SWAP(a,b) { pixelvalue temp=(a);(a)=(b);(b)=temp; }

class RangeTrackMedian5Filter : public RangeTrackFilter
{

 public:

    virtual void Filter(vector<long> & raw, vector<long> & filtered);
	
 private:
	
	pixelvalue opt_med5(pixelvalue * p);

};

#endif // RangeTrackMedian5Filter_h
