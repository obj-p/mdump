# PrivateHeaders

## Notes

### ",? string

When a `",?` is specified it represents a property that has been marked as `@optional`. For example,

```objective-c
@protocol NSObject
@optional
@property (readonly, copy) NSString *debugDescription;
@end
```
*Referenced from [Support the optional property attributes in mtl_copyPropertyAttributes](https://github.com/Mantle/Mantle/issues/899)*
