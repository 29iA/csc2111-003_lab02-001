#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
   return wf;
}

void WriteFile::~WriteFile()
{
   close(wf);
   delete wf;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && length() > 0)
   {
      output_file << getText() << endl;
   }
}
