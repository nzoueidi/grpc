/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/any.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_
#define GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_

#include "upb/msg.h"

#include "upb/decode.h"
#include "upb/encode.h"
#include "upb/port_def.inc"
UPB_BEGIN_EXTERN_C

struct google_protobuf_Any;
typedef struct google_protobuf_Any google_protobuf_Any;

/* Enums */

/* google.protobuf.Any */

extern const upb_msglayout google_protobuf_Any_msginit;
UPB_INLINE google_protobuf_Any* google_protobuf_Any_new(upb_arena* arena) {
  return upb_msg_new(&google_protobuf_Any_msginit, arena);
}
UPB_INLINE google_protobuf_Any* google_protobuf_Any_parsenew(upb_stringview buf,
                                                             upb_arena* arena) {
  google_protobuf_Any* ret = google_protobuf_Any_new(arena);
  return (ret && upb_decode(buf, ret, &google_protobuf_Any_msginit)) ? ret
                                                                     : NULL;
}
UPB_INLINE char* google_protobuf_Any_serialize(const google_protobuf_Any* msg,
                                               upb_arena* arena, size_t* len) {
  return upb_encode(msg, &google_protobuf_Any_msginit, arena, len);
}

UPB_INLINE upb_stringview
google_protobuf_Any_type_url(const google_protobuf_Any* msg) {
  return UPB_FIELD_AT(msg, upb_stringview, UPB_SIZE(0, 0));
}
UPB_INLINE upb_stringview
google_protobuf_Any_value(const google_protobuf_Any* msg) {
  return UPB_FIELD_AT(msg, upb_stringview, UPB_SIZE(8, 16));
}

UPB_INLINE void google_protobuf_Any_set_type_url(google_protobuf_Any* msg,
                                                 upb_stringview value) {
  UPB_FIELD_AT(msg, upb_stringview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void google_protobuf_Any_set_value(google_protobuf_Any* msg,
                                              upb_stringview value) {
  UPB_FIELD_AT(msg, upb_stringview, UPB_SIZE(8, 16)) = value;
}

UPB_END_EXTERN_C

#include "upb/port_undef.inc"

#endif /* GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_ */
