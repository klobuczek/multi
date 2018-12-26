require 'bundler/gem_tasks'
require 'rspec/core/rake_task'

RSpec::Core::RakeTask.new(:spec)

require 'rake/extensiontask'
require 'rake/javaextensiontask'

task :build => :compile

CLEAN.include(
  'tmp',
  'lib/multi/multi.jar',
  'lib/multi/multi.so',
  'lib/multi/multi.bundle'
)

GEMSPEC = Gem::Specification.load('multi.gemspec')

if RUBY_PLATFORM =~ /java/
  Rake::JavaExtensionTask.new('multi') do |ext|
    ext.ext_dir = 'ext/java'
    ext.lib_dir = 'lib/multi'
  end
else
  Rake::ExtensionTask.new('multi') do |ext|
    ext.lib_dir = 'lib/multi'
  end
end

Gem::PackageTask.new(GEMSPEC) do |pkg|
end

task :default => [:clobber, :compile, :spec]
