#ifndef RangeTrackConstantPositionReader_h
#define RangeTrackConstantPositionReader_h

#include "RangeTrackPositionReader.h"


class RangeTrackConstantPositionReader : public RangeTrackPositionReader
{

 public:

    RangeTrackConstantPositionReader(long value);

    virtual long GetPosition();
	//virtual long GetThetaPosition();

    void SetPosition(long value);

    virtual void GoToPosition(long position);

private:

    long m_value;

};

#endif // RangeTrackConstantPositionReader_h
