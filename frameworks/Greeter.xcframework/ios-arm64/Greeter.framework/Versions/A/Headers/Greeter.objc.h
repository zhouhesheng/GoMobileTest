// Objective-C API for talking to gomobiletest/go/greeter Go package.
//   gobind -lang=objc gomobiletest/go/greeter
//
// File is generated by gobind. Do not edit.

#ifndef __Greeter_H__
#define __Greeter_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class GreeterGreeter;
@protocol GreeterPrinter;
@class GreeterPrinter;

@protocol GreeterPrinter <NSObject>
- (void)printSomething:(NSString* _Nullable)s;
@end

@interface GreeterGreeter : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init:(id<GreeterPrinter> _Nullable)printer;
- (void)greet:(NSString* _Nullable)name;
@end

FOUNDATION_EXPORT GreeterGreeter* _Nullable GreeterNewGreeter(id<GreeterPrinter> _Nullable printer);

@class GreeterPrinter;

@interface GreeterPrinter : NSObject <goSeqRefInterface, GreeterPrinter> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)printSomething:(NSString* _Nullable)s;
@end

#endif
