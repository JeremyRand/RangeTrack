#ifndef RangeTrackFilter_h
#define RangeTrackFilter_h

#include <vector>

using namespace std;

class RangeTrackFilter
{

 public:

	RangeTrackFilter();

    virtual void Filter(vector<long> & raw, vector<long> & filtered);

};

#endif // RangeTrackFilter_h
