#ifndef RangeTrackSumPositionReader_h
#define RangeTrackSumPositionReader_h

#include "RangeTrackPositionReader.h"
#include <vector>

using namespace std;

class RangeTrackSumPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackSumPositionReader(vector<RangeTrackPositionReader> readers);

    virtual RangeTrackPositionReader* GetReader(int index);

    virtual void SetReader(int index, RangeTrackPositionReader* reader);

    virtual long GetPosition();

    virtual void GoToPosition(long position);


 private:
    vector<RangeTrackPositionReader> m_position_readers;

};

#endif // RangeTrackSumPositionReader_h
