#include <string>

namespace log_line {
std::string message(std::string line) {
    std::size_t pos_of_end_of_level=line.find(']');
    return line.substr(pos_of_end_of_level+3);
    // return the message
}

std::string log_level(std::string line) {
    std::size_t pos_of_end_of_level=line.find(']');
    return line.substr(1, pos_of_end_of_level-1);
    // return the log level
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::size_t pos_of_end_of_level=line.find(']');
    std::string log_info=line.substr(1, pos_of_end_of_level-1);
    return line.substr(pos_of_end_of_level+3)+ " ("+line.substr(1, pos_of_end_of_level-1)+")";

}
}  // namespace log_line
