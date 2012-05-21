#ifndef RangeTrackCreateDistancePositionReader_h
#define RangeTrackCreateDistancePositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackCreateDistancePositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackCreateDistancePositionReader();

    virtual long GetPosition();
	//virtual long GetThetaPosition();

    virtual void GoToPosition(long position);

};

#endif // RangeTrackCreateDistancePositionReader_h
