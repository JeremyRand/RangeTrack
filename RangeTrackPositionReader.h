#ifndef RangeTrackPositionReader_h
#define RangeTrackPositionReader_h


/*
 *
 *
 */
class RangeTrackPositionReader
{

 public:

    virtual long GetPosition();
	//virtual long GetYPosition();
	//virtual long GetThetaPosition();

    virtual void GoToPosition(long position);

};

#endif // RangeTrackPositionReader_h
