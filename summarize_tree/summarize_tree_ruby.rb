#!/usr/bin/ruby

require 'find'

dirNum = 0
fileNum = 0

Find.find(ARGV[0]) do |dir|
  if Filetest.directory?(dir)
    dirNum += 1
  else 
    fileNum += 1
  end
end

puts "Processed all the files from <#{ARGV[0]}>."
puts "There were #{dirNum} directories."
puts "There were #{fileNum} regular files."
