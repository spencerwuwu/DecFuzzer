#ifndef s614retdec_H
#define s614retdec_H

#include "w2c2_base.h"

typedef struct s614retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s614retdecInstance;

void f0(s614retdecInstance*);

void f1(s614retdecInstance*);

U32 f2(s614retdecInstance*);

void f3(s614retdecInstance*,U32);

void f4(s614retdecInstance*,U32);

void s614retdec____wasm_call_ctors(s614retdecInstance*i);

void s614retdec____wasm_apply_data_relocs(s614retdecInstance*i);

U32 s614retdec_func_1(s614retdecInstance*i);

void s614retdec_call_cb(s614retdecInstance*i,U32 l0);

void s614retdecInstantiate(s614retdecInstance* instance, void* resolve(const char* module, const char* name));

void s614retdecFreeInstance(s614retdecInstance* instance);

#endif /* s614retdec_H */

