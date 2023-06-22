#ifndef s368retdec_H
#define s368retdec_H

#include "w2c2_base.h"

typedef struct s368retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s368retdecInstance;

void f0(s368retdecInstance*);

void f1(s368retdecInstance*);

U32 f2(s368retdecInstance*);

void f3(s368retdecInstance*,U32);

U32 f4(s368retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s368retdecInstance*,U32,U32,U32,U32,U32);

void f6(s368retdecInstance*,U32);

void f7(s368retdecInstance*,U32,U32,U32);

void f8(s368retdecInstance*,U32,U32,U32);

void s368retdec____wasm_call_ctors(s368retdecInstance*i);

void s368retdec____wasm_apply_data_relocs(s368retdecInstance*i);

U32 s368retdec_func_1(s368retdecInstance*i);

void s368retdec_call_cb(s368retdecInstance*i,U32 l0);

void s368retdecInstantiate(s368retdecInstance* instance, void* resolve(const char* module, const char* name));

void s368retdecFreeInstance(s368retdecInstance* instance);

#endif /* s368retdec_H */

