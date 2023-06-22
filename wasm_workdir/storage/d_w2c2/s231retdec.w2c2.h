#ifndef s231retdec_H
#define s231retdec_H

#include "w2c2_base.h"

typedef struct s231retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s231retdecInstance;

void f0(s231retdecInstance*);

void f1(s231retdecInstance*);

U32 f2(s231retdecInstance*);

void f3(s231retdecInstance*,U32);

U32 f4(s231retdecInstance*,U32,U32,U32,U32);

void f5(s231retdecInstance*,U32,U32,U32,U32,U32);

void f6(s231retdecInstance*,U32);

void f7(s231retdecInstance*,U32,U32,U32);

void f8(s231retdecInstance*,U32,U32,U32);

void s231retdec____wasm_call_ctors(s231retdecInstance*i);

void s231retdec____wasm_apply_data_relocs(s231retdecInstance*i);

U32 s231retdec_func_1(s231retdecInstance*i);

void s231retdec_call_cb(s231retdecInstance*i,U32 l0);

void s231retdecInstantiate(s231retdecInstance* instance, void* resolve(const char* module, const char* name));

void s231retdecFreeInstance(s231retdecInstance* instance);

#endif /* s231retdec_H */

