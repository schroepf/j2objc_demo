//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.6.1/jre_emul/apache_harmony/classlib/modules/luni/src/main/java/java/io/FileReader.java
//
//  Created by tball on 2/19/13.
//

@class JavaIoFile;
@class JavaIoFileDescriptor;

#import "JreEmulation.h"
#import "java/io/InputStreamReader.h"

@interface JavaIoFileReader : JavaIoInputStreamReader {
}

- (id)initWithJavaIoFile:(JavaIoFile *)file;
- (id)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (id)initWithNSString:(NSString *)filename;
@end