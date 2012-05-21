#ifndef RangeTrackNullPositionReader_h
#define RangeTrackNullPositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackNullPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackNullPositionReader();

    virtual long GetPosition();
	//virtual long GetThetaPosition();

    virtual void GoToPosition(long position);

};

#endif // RangeTrackNullPositionReader_h
