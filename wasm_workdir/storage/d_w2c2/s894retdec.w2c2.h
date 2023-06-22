#ifndef s894retdec_H
#define s894retdec_H

#include "w2c2_base.h"

typedef struct s894retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s894retdecInstance;

void f0(s894retdecInstance*);

void f1(s894retdecInstance*);

U32 f2(s894retdecInstance*);

void f3(s894retdecInstance*,U32);

U32 f4(s894retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s894retdecInstance*,U32,U32,U32,U32,U32);

void f6(s894retdecInstance*,U32);

void f7(s894retdecInstance*,U32,U32,U32);

void f8(s894retdecInstance*,U32,U32,U32);

void s894retdec____wasm_call_ctors(s894retdecInstance*i);

void s894retdec____wasm_apply_data_relocs(s894retdecInstance*i);

U32 s894retdec_func_1(s894retdecInstance*i);

void s894retdec_call_cb(s894retdecInstance*i,U32 l0);

void s894retdecInstantiate(s894retdecInstance* instance, void* resolve(const char* module, const char* name));

void s894retdecFreeInstance(s894retdecInstance* instance);

#endif /* s894retdec_H */

