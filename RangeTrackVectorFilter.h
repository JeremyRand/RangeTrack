#ifndef RangeTrackVectorFilter_h
#define RangeTrackVectorFilter_h

#include "RangeTrackFilter.h"

#include <vector>

using namespace std;

class RangeTrackVectorFilter : public RangeTrackFilter
{

 public:

    RangeTrackVectorFilter(vector<RangeTrackFilter *> filters);

    void AddFilter(RangeTrackFilter *filter);
    virtual void Filter(vector<long> & raw, vector<long> & filtered);

 private:

    vector<RangeTrackFilter*> m_filter_list;
    vector<vector <long> > m_temp_filter_results;
};

#endif // RangeTrackVectorFilter_h

