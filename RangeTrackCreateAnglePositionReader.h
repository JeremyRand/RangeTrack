#ifndef RangeTrackCreateAnglePositionReader_h
#define RangeTrackCreateAnglePositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackCreateAnglePositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackCreateAnglePositionReader();

    //virtual long GetXPosition();
	virtual long GetPosition();

    virtual void GoToPosition(long position);

};

#endif // RangeTrackCreateAnglePositionReader_h
