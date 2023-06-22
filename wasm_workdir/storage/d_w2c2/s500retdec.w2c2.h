#ifndef s500retdec_H
#define s500retdec_H

#include "w2c2_base.h"

typedef struct s500retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s500retdecInstance;

void f0(s500retdecInstance*);

void f1(s500retdecInstance*);

U32 f2(s500retdecInstance*);

void f3(s500retdecInstance*,U32);

U32 f4(s500retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s500retdecInstance*,U32,U32,U32,U32,U32);

void f6(s500retdecInstance*,U32);

void f7(s500retdecInstance*,U32,U32,U32);

void f8(s500retdecInstance*,U32,U32,U32);

void s500retdec____wasm_call_ctors(s500retdecInstance*i);

void s500retdec____wasm_apply_data_relocs(s500retdecInstance*i);

U32 s500retdec_func_1(s500retdecInstance*i);

void s500retdec_call_cb(s500retdecInstance*i,U32 l0);

void s500retdecInstantiate(s500retdecInstance* instance, void* resolve(const char* module, const char* name));

void s500retdecFreeInstance(s500retdecInstance* instance);

#endif /* s500retdec_H */

