#include "RangeTrackRawAnalogRangeReader.h"

#include "table_ir_range.h"



RangeTrackRawAnalogRangeReader::RangeTrackRawAnalogRangeReader(int port)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FB0 begin
{
    SetPort(port);
}
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FB0 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

int RangeTrackRawAnalogRangeReader::GetPort()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FAC begin
{
    return m_port;
}
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FAC end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void RangeTrackRawAnalogRangeReader::SetPort(int port)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FA4 begin
{
    m_port = port;
}
// section -64--88-1-7-672b1494:1245fa68a9a:-8000:0000000000000FA4 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

short RangeTrackRawAnalogRangeReader::GetRange()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-7--2e422ddc:1245f06c020:-8000:0000000000000D13 begin
{
	return(analog10(m_port));
}
// section -64--88-1-7--2e422ddc:1245f06c020:-8000:0000000000000D13 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element
