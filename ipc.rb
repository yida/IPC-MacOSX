require 'formula'

# Documentation: https://github.com/mxcl/homebrew/wiki/Formula-Cookbook
# PLEASE REMOVE ALL GENERATED COMMENTS BEFORE SUBMITTING YOUR PULL REQUEST!

class Ipc < Formula
  homepage ''
  url 'https://github.com/yida/IPC-MacOSX/blob/master/ipc-3.9.1-osx.tar.gz?raw=true'
  md5 '7fa5670380165ae6839a09e3c8747dd4'

  depends_on 'swig' => :build

  def install
    # ENV.x11 # if your formula requires any X11 headers
    # ENV.j1  # if your formula's build system can't parallelize

    # system "cmake", ".", *std_cmake_args
    system "make INSTALL_DIR=#{prefix}" # if this fails, try separate make/make install steps
  end

  def test
    # This test will fail and we won't accept that! It's enough to just replace
    # "false" with the main program this formula installs, but it'd be nice if you
    # were more thorough. Run the test with `brew test ipc`.
    system "false"
  end
end
