#ifndef RangeTrackMeanFilter_h
#define RangeTrackMeanFilter_h

#include "RangeTrackFilter.h"

#include <vector>

using namespace std;

class RangeTrackMeanFilter : public RangeTrackFilter
{

 public:

    RangeTrackMeanFilter(long blur);

    virtual void Filter(vector<long> & raw, vector<long> & filtered);

 private:

    long m_blur;
};

#endif // RangeTrackMeanFilter_h

