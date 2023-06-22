#ifndef s556r2_H
#define s556r2_H

#include "w2c2_base.h"

typedef struct s556r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s556r2Instance;

void f0(s556r2Instance*);

void f1(s556r2Instance*);

U32 f2(s556r2Instance*);

void f3(s556r2Instance*,U32);

U32 f4(s556r2Instance*,U32,U32,U32,U32,U32);

void f5(s556r2Instance*,U32,U32,U32,U32,U32);

void f6(s556r2Instance*,U32);

void f7(s556r2Instance*,U32,U32,U32);

void f8(s556r2Instance*,U32,U32,U32);

void s556r2____wasm_call_ctors(s556r2Instance*i);

void s556r2____wasm_apply_data_relocs(s556r2Instance*i);

U32 s556r2_func_1(s556r2Instance*i);

void s556r2_call_cb(s556r2Instance*i,U32 l0);

void s556r2Instantiate(s556r2Instance* instance, void* resolve(const char* module, const char* name));

void s556r2FreeInstance(s556r2Instance* instance);

#endif /* s556r2_H */

