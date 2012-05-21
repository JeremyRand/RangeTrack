#ifndef RangeTrackDiffPositionReader_h
#define RangeTrackDiffPositionReader_h

#include "RangeTrackPositionReader.h"
#include <vector>

using namespace std;

class RangeTrackDiffPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackDiffPositionReader(vector<RangeTrackPositionReader*> readers);

    virtual RangeTrackPositionReader* GetReader(int index);

    virtual void SetReader(int index, RangeTrackPositionReader* reader);

    virtual long GetPosition();

    virtual void GoToPosition(long position);


 private:
    vector<RangeTrackPositionReader*> m_position_readers;

};

#endif // RangeTrackDiffPositionReader_h
