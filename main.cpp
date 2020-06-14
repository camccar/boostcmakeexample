#include <iostream>

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main(int argc, char **argv) {
  std::cout << "Begin Wait!" << std::endl;

  boost::asio::io_context io;

  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
  t.wait();

  std::cout << "Wait Finished" << std::endl;

  return 0;
}
