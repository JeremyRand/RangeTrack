#ifndef RangeTrackTimePositionReader_h
#define RangeTrackTimePositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackTimePositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackTimePositionReader();

    //virtual long GetXPosition();
	virtual long GetPosition();

    virtual void GoToPosition(long position);

};

#endif // RangeTrackTimePositionReader_h
